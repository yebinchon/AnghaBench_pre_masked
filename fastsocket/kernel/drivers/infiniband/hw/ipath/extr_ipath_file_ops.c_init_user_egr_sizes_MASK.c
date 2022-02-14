
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_portdata {unsigned int port_rcvegrbuf_chunks; unsigned int port_rcvegrbufs_perchunk; unsigned int port_rcvegrbuf_size; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {unsigned int ipath_rcvegrbufsize; unsigned int ipath_rcvegrcnt; } ;



__attribute__((used)) static void FUNC_0(struct ipath_portdata *VAR_0)
{
 struct ipath_devdata *VAR_1 = VAR_0->port_dd;
 unsigned VAR_2, VAR_3, VAR_4;
 VAR_4 = 0x8000;
 VAR_2 = VAR_4 / VAR_1->ipath_rcvegrbufsize;
 VAR_3 = VAR_1->ipath_rcvegrcnt;
 VAR_0->port_rcvegrbuf_chunks = (VAR_3 + VAR_2 - 1) / VAR_2;
 VAR_0->port_rcvegrbufs_perchunk = VAR_2;
 VAR_0->port_rcvegrbuf_size = VAR_4;
}
