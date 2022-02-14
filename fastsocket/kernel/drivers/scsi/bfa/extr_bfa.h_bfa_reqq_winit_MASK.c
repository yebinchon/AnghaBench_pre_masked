
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_reqq_wait_s {void (* qresume ) (void*) ;void* cbarg; } ;



__attribute__((used)) static inline void
FUNC_0(struct bfa_reqq_wait_s *VAR_0, void (*VAR_1) (void *VAR_2),
        void *VAR_3)
{
 VAR_0->qresume = VAR_1;
 VAR_0->cbarg = VAR_3;
}
