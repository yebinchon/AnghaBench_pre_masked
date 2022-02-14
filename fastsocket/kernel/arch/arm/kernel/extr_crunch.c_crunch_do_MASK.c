
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crunch_state {int dummy; } ;
struct thread_info {struct crunch_state crunchstate; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 struct crunch_state* VAR_4 ;
 int FUNC_3 (struct thread_info*) ;
 int FUNC_4 (struct crunch_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 struct thread_info *VAR_8 = (struct thread_info *)VAR_7;
 struct crunch_state *VAR_9;
 u32 VAR_10;

 VAR_9 = &VAR_8->crunchstate;

 switch (VAR_6) {
 case 130:
  FUNC_4(VAR_9, 0, sizeof(*VAR_9));






 case 129:
  FUNC_3(VAR_8);
  break;

 case 128:
  VAR_10 = FUNC_0(VAR_0);
  if (FUNC_2(VAR_10) || VAR_4 == VAR_9) {





   VAR_10 ^= VAR_1;
   FUNC_1(0xaa, VAR_2);
   FUNC_1(VAR_10, VAR_0);
  }
  break;
 }

 return VAR_3;
}
