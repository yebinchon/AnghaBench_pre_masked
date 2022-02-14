
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* create ) (struct net*,struct socket*) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct net*,struct socket*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_4, struct socket *VAR_5, int VAR_6,
   int VAR_7)
{
 int VAR_8 = -VAR_1;

 if (VAR_6 < 0 || VAR_6 > VAR_2)
  goto out;

 VAR_8 = -VAR_0;
 if (!VAR_3[VAR_6])
  FUNC_1("pppox-proto-%d", VAR_6);
 if (!VAR_3[VAR_6] ||
     !FUNC_3(VAR_3[VAR_6]->owner))
  goto out;

 VAR_8 = VAR_3[VAR_6]->create(VAR_4, VAR_5);

 FUNC_0(VAR_3[VAR_6]->owner);
out:
 return VAR_8;
}
