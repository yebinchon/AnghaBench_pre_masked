
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_data; int kn_sfflags; scalar_t__ kn_sdata; } ;
struct bpf_d {scalar_t__ bd_hlen; scalar_t__ bd_hbuf_read; scalar_t__ bd_slen; scalar_t__ bd_bufsize; scalar_t__ bd_state; scalar_t__ bd_immediate; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_d*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2, struct bpf_d *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->bd_immediate) {
  VAR_2->kn_data = (VAR_3->bd_hlen == 0 || VAR_3->bd_hbuf_read != 0 ?
      VAR_3->bd_slen : VAR_3->bd_hlen);
  int64_t VAR_5 = 1;
  if (VAR_2->kn_sfflags & VAR_1) {
   if (VAR_2->kn_sdata > VAR_3->bd_bufsize)
    VAR_5 = VAR_3->bd_bufsize;
   else if (VAR_2->kn_sdata > VAR_5)
    VAR_5 = VAR_2->kn_sdata;
  }
  VAR_4 = (VAR_2->kn_data >= VAR_5);
 } else {
  VAR_2->kn_data = ((VAR_3->bd_hlen == 0 || VAR_3->bd_hbuf_read != 0) &&
      VAR_3->bd_state == VAR_0 ? VAR_3->bd_slen : VAR_3->bd_hlen);
  VAR_4 = (VAR_2->kn_data > 0);
 }
 if (!VAR_4)
  FUNC_0(VAR_3);

 return (VAR_4);
}
