
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_d {scalar_t__ bd_hbuf_read; scalar_t__ bd_dcount; scalar_t__ bd_rcount; scalar_t__ bd_hcnt; scalar_t__ bd_scnt; scalar_t__ bd_hlen; scalar_t__ bd_slen; int * bd_hbuf; int * bd_fbuf; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct bpf_d *VAR_0)
{
 if (VAR_0->bd_hbuf_read != 0)
  FUNC_0("resetting buffers during read");

 if (VAR_0->bd_hbuf) {

  VAR_0->bd_fbuf = VAR_0->bd_hbuf;
  VAR_0->bd_hbuf = ((void*)0);
 }
 VAR_0->bd_slen = 0;
 VAR_0->bd_hlen = 0;
 VAR_0->bd_scnt = 0;
 VAR_0->bd_hcnt = 0;
 VAR_0->bd_rcount = 0;
 VAR_0->bd_dcount = 0;
}
