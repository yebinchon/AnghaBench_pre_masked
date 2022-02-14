
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int channel_active; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  if (!FUNC_0(VAR_1, &VAR_0->channel_active))
   break;
 return VAR_1;
}
