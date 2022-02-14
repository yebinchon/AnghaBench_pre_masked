
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardinfo {TYPE_1__* battery; } ;
struct TYPE_2__ {scalar_t__ good; scalar_t__ warned; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cardinfo*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cardinfo *VAR_5)
{
 if (VAR_5->battery[0].good && VAR_5->battery[1].good)
  FUNC_0(VAR_5, VAR_0, VAR_3);
 else if (VAR_5->battery[0].warned || VAR_5->battery[1].warned)
  FUNC_0(VAR_5, VAR_0, VAR_4);
 else if (!VAR_5->battery[0].good && !VAR_5->battery[1].good)
  FUNC_0(VAR_5, VAR_0, VAR_2);
 else
  FUNC_0(VAR_5, VAR_0, VAR_1);
}
