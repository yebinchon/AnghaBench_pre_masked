
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_d {scalar_t__ bd_hbuf_read; scalar_t__ bd_sbuf; scalar_t__ bd_hbuf; scalar_t__ bd_fbuf; scalar_t__ bd_filter; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct bpf_d *VAR_1)
{





 if (VAR_1->bd_hbuf_read != 0)
  FUNC_1("bpf buffer freed during read");

 if (VAR_1->bd_sbuf != 0) {
  FUNC_0(VAR_1->bd_sbuf, VAR_0);
  if (VAR_1->bd_hbuf != 0)
   FUNC_0(VAR_1->bd_hbuf, VAR_0);
  if (VAR_1->bd_fbuf != 0)
   FUNC_0(VAR_1->bd_fbuf, VAR_0);
 }
 if (VAR_1->bd_filter)
  FUNC_0((caddr_t)VAR_1->bd_filter, VAR_0);
}
