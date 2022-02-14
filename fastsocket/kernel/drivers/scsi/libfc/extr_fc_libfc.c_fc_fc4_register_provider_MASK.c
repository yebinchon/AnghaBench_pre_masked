
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc4_prov {scalar_t__ recv; } ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fc4_prov** VAR_3 ;
 struct fc4_prov** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(enum fc_fh_type VAR_6, struct fc4_prov *VAR_7)
{
 struct fc4_prov **VAR_8;
 int VAR_9 = 0;

 if (VAR_6 >= VAR_2)
  return -VAR_1;
 FUNC_0(&VAR_5);
 VAR_8 = (VAR_7->recv ? VAR_4 : VAR_3) + VAR_6;
 if (*VAR_8)
  VAR_9 = -VAR_0;
 else
  *VAR_8 = VAR_7;
 FUNC_1(&VAR_5);
 return VAR_9;
}
