
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_plog_rec_s {scalar_t__ log_type; scalar_t__ log_num_ints; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct bfa_plog_rec_s *VAR_3)
{
 if ((VAR_3->log_type != VAR_1) &&
  (VAR_3->log_type != VAR_2))
  return 1;

 if ((VAR_3->log_type != VAR_1) &&
  (VAR_3->log_num_ints > VAR_0))
  return 1;

 return 0;
}
