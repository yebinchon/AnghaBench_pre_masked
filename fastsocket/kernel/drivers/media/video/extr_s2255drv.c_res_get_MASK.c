
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2255_fh {int resources; struct s2255_channel* channel; } ;
struct s2255_channel {int resources; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct s2255_fh *VAR_0)
{
 struct s2255_channel *VAR_1 = VAR_0->channel;

 if (VAR_1->resources)
  return 0;

 VAR_1->resources = 1;
 VAR_0->resources = 1;
 FUNC_0(1, "s2255: res: get\n");
 return 1;
}
