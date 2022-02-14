
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10bio {int state; int * master_bio; int sectors; int remaining; struct mddev* mddev; } ;
struct mddev {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mddev*,int ,int) ;
 int FUNC_2 (struct r10bio*) ;
 int FUNC_3 (struct r10bio*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r10bio *VAR_2)
{
 struct mddev *VAR_3 = VAR_2->mddev;

 while (FUNC_0(&VAR_2->remaining)) {
  if (VAR_2->master_bio == ((void*)0)) {

   sector_t VAR_4 = VAR_2->sectors;
   if (FUNC_4(VAR_0, &VAR_2->state) ||
       FUNC_4(VAR_1, &VAR_2->state))
    FUNC_3(VAR_2);
   else
    FUNC_2(VAR_2);
   FUNC_1(VAR_3, VAR_4, 1);
   break;
  } else {
   struct r10bio *VAR_5 = (struct r10bio *)VAR_2->master_bio;
   if (FUNC_4(VAR_0, &VAR_2->state) ||
       FUNC_4(VAR_1, &VAR_2->state))
    FUNC_3(VAR_2);
   else
    FUNC_2(VAR_2);
   VAR_2 = VAR_5;
  }
 }
}
