
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_wc {scalar_t__ wc_count; void* wc_cbarg; int wc_resume; } ;
typedef int bfa_wc_resume_t ;


 int bfa_wc_up (struct bfa_wc*) ;

__attribute__((used)) static inline void
bfa_wc_init(struct bfa_wc *wc, bfa_wc_resume_t wc_resume, void *wc_cbarg)
{
 wc->wc_resume = wc_resume;
 wc->wc_cbarg = wc_cbarg;
 wc->wc_count = 0;
 bfa_wc_up(wc);
}
