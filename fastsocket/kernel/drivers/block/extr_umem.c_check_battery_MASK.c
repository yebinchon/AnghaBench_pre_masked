
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cardinfo {TYPE_2__* battery; TYPE_1__* dev; } ;
struct TYPE_4__ {int good; int warned; scalar_t__ last_change; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cardinfo *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_5 != VAR_3->battery[VAR_4].good) {
  VAR_3->battery[VAR_4].good = !VAR_3->battery[VAR_4].good;
  VAR_3->battery[VAR_4].last_change = VAR_2;

  if (VAR_3->battery[VAR_4].good) {
   FUNC_0(VAR_1, &VAR_3->dev->dev,
    "Battery %d now good\n", VAR_4 + 1);
   VAR_3->battery[VAR_4].warned = 0;
  } else
   FUNC_0(VAR_1, &VAR_3->dev->dev,
    "Battery %d now FAILED\n", VAR_4 + 1);

  return 1;
 } else if (!VAR_3->battery[VAR_4].good &&
     !VAR_3->battery[VAR_4].warned &&
     FUNC_1(VAR_2, VAR_3->battery[VAR_4].last_change +
     (VAR_0 * 60 * 60 * 5))) {
  FUNC_0(VAR_1, &VAR_3->dev->dev,
   "Battery %d still FAILED after 5 hours\n", VAR_4 + 1);
  VAR_3->battery[VAR_4].warned = 1;

  return 1;
 }

 return 0;
}
