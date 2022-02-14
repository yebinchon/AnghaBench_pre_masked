
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int flag; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 int FUNC_3 (unsigned int,unsigned int*,unsigned int*,int,int ) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,int *,int *) ;
 int FUNC_5 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(unsigned VAR_2, unsigned VAR_3, struct dentry *VAR_4)
{
 struct dentry *VAR_5 = ((void*)0);
 unsigned VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10 = 0;
 char VAR_11[12];
 u32 VAR_12, VAR_13;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
  if (!FUNC_3(VAR_2, &VAR_7, &VAR_8, VAR_9,
       VAR_0[VAR_3].flag))
   continue;

  for (VAR_6 = VAR_7; VAR_6 <= VAR_8; VAR_6++) {
   if (FUNC_4(VAR_2, VAR_6, &VAR_12, &VAR_13))
    continue;

   FUNC_5(VAR_11, "0x%x", VAR_6);
   VAR_5 = FUNC_2(VAR_11, VAR_4);
   VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_5);
   if (VAR_10)
    return VAR_10;
  }
 }

 return VAR_10;
}
