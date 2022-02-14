
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefix_bits {int dummy; } ;
typedef enum reason_type { ____Placeholder_reason_type } reason_type ;


 int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,struct prefix_bits*) ;

enum reason_type FUNC_3(unsigned long VAR_7)
{
 unsigned int VAR_8;
 unsigned char *VAR_9;
 struct prefix_bits VAR_10;
 int VAR_11;
 enum reason_type VAR_12 = VAR_1;

 VAR_9 = (unsigned char *)VAR_7;
 VAR_9 += FUNC_2(VAR_9, &VAR_10);
 VAR_9 += FUNC_1(VAR_9, &VAR_8);

 FUNC_0(VAR_8, VAR_5, VAR_2);
 FUNC_0(VAR_8, VAR_6, VAR_3);
 FUNC_0(VAR_8, VAR_4, VAR_0);

exit:
 return VAR_12;
}
