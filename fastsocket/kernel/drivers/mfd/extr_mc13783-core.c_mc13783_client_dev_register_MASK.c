
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfd_cell {char const* name; } ;
struct mc13783 {int dev; } ;


 int FUNC_0 (int ,int,struct mfd_cell*,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mc13783 *VAR_0,
           const char *VAR_1)
{
 struct mfd_cell VAR_2 = {};

 VAR_2.name = VAR_1;

 FUNC_0(VAR_0->dev, -1, &VAR_2, 1, ((void*)0), 0);
}
