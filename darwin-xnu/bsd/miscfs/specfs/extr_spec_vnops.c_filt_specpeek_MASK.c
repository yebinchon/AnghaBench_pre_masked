
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_data; } ;


 int FUNC_0 (struct knote*,int) ;
 int FUNC_1 (struct knote*) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1);

 return VAR_0->kn_data != 0;
}
