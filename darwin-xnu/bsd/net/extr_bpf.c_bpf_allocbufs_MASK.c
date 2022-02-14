
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_d {scalar_t__ bd_hcnt; scalar_t__ bd_scnt; scalar_t__ bd_hlen; scalar_t__ bd_slen; int * bd_fbuf; int * bd_sbuf; int bd_bufsize; int * bd_hbuf; } ;
typedef void* caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bpf_d *VAR_3)
{
 if (VAR_3->bd_sbuf != ((void*)0)) {
  FUNC_0(VAR_3->bd_sbuf, VAR_1);
  VAR_3->bd_sbuf = ((void*)0);
 }
 if (VAR_3->bd_hbuf != ((void*)0)) {
  FUNC_0(VAR_3->bd_hbuf, VAR_1);
  VAR_3->bd_hbuf = ((void*)0);
 }
 if (VAR_3->bd_fbuf != ((void*)0)) {
  FUNC_0(VAR_3->bd_fbuf, VAR_1);
  VAR_3->bd_fbuf = ((void*)0);
 }

 VAR_3->bd_fbuf = (caddr_t) FUNC_1(VAR_3->bd_bufsize, VAR_1, VAR_2);
 if (VAR_3->bd_fbuf == ((void*)0))
  return (VAR_0);

 VAR_3->bd_sbuf = (caddr_t) FUNC_1(VAR_3->bd_bufsize, VAR_1, VAR_2);
 if (VAR_3->bd_sbuf == ((void*)0)) {
  FUNC_0(VAR_3->bd_fbuf, VAR_1);
  VAR_3->bd_fbuf = ((void*)0);
  return (VAR_0);
 }
 VAR_3->bd_slen = 0;
 VAR_3->bd_hlen = 0;
 VAR_3->bd_scnt = 0;
 VAR_3->bd_hcnt = 0;
 return (0);
}
