
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ngene_channel {scalar_t__ users; int demux; } ;


 int FUNC_0 (int *,void*,int ) ;

void *FUNC_1(void *VAR_0, void *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct ngene_channel *VAR_5 = VAR_0;


 if (VAR_5->users > 0)
  FUNC_0(&VAR_5->demux, VAR_1, VAR_2);
 return ((void*)0);
}
