
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int value; int id; } ;
struct maven_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct maven_data*,int) ;

__attribute__((used)) static int FUNC_2 (struct maven_data* VAR_1,
         struct v4l2_control *VAR_2) {
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->id);
 if (VAR_3 < 0) return -VAR_0;
 VAR_2->value = *FUNC_1(VAR_1, VAR_3);
 return 0;
}
