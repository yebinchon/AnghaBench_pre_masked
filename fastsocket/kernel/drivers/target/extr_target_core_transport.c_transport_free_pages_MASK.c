
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; scalar_t__ t_bidi_data_nents; int * t_bidi_data_sg; scalar_t__ t_data_nents; int * t_data_sg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct se_cmd *VAR_1)
{
 if (VAR_1->se_cmd_flags & VAR_0)
  return;

 FUNC_0(VAR_1->t_data_sg, VAR_1->t_data_nents);
 VAR_1->t_data_sg = ((void*)0);
 VAR_1->t_data_nents = 0;

 FUNC_0(VAR_1->t_bidi_data_sg, VAR_1->t_bidi_data_nents);
 VAR_1->t_bidi_data_sg = ((void*)0);
 VAR_1->t_bidi_data_nents = 0;
}
