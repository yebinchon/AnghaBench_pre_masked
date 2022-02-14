
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ldc_channel {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ldc_channel *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_0, "STATE (%s) --> (%s)\n",
        FUNC_1(VAR_1->state),
        FUNC_1(VAR_2));

 VAR_1->state = VAR_2;
}
