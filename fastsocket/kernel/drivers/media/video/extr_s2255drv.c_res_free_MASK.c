
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2255_fh {scalar_t__ resources; struct s2255_channel* channel; } ;
struct s2255_channel {scalar_t__ resources; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct s2255_fh *VAR_0)
{
 struct s2255_channel *VAR_1 = VAR_0->channel;
 VAR_1->resources = 0;
 VAR_0->resources = 0;
 FUNC_0(1, "res: put\n");
}
