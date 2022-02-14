
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp_info {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int (* func ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct mdp_info*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mdp_info*,int ) ;
 int FUNC_2 (struct mdp_info*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 uint32_t VAR_12;
 unsigned long VAR_13;
 struct mdp_info *VAR_14 = VAR_11;

 FUNC_3(&VAR_8, VAR_13);

 VAR_12 = FUNC_1(VAR_14, VAR_4);
 FUNC_2(VAR_14, VAR_12, VAR_3);

 VAR_12 &= VAR_7;
 if (VAR_12 & VAR_0) {
  if (VAR_5) {
   VAR_5->func(VAR_5);
   VAR_5 = ((void*)0);
  }
  FUNC_6(&VAR_6);
 }

 if (VAR_12 & VAR_1)
  FUNC_6(&VAR_9);

 if (VAR_12)
  FUNC_0(VAR_14, VAR_12);

 FUNC_4(&VAR_8, VAR_13);
 return VAR_2;
}
