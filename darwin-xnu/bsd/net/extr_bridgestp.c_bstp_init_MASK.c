
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct bstp_state {int bs_running; } ;


 int FUNC_0 (struct bstp_state*) ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (int ,struct bstp_state*,struct timespec*) ;
 int FUNC_3 (struct bstp_state*) ;
 int VAR_0 ;

void
FUNC_4(struct bstp_state *VAR_1)
{
 struct timespec VAR_2;

 VAR_2.tv_sec = 1;
 VAR_2.tv_nsec = 0;

 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_1, &VAR_2);
 VAR_1->bs_running = 1;
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
}
