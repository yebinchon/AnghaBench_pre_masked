
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct turnstile {int ts_inheritor_links; } ;
typedef int boolean_t ;
struct TYPE_8__ {int inheritor_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct turnstile*) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int,int,struct turnstile*) ;

__attribute__((used)) static boolean_t
FUNC_10(
 thread_t VAR_7,
 struct turnstile *VAR_8)
{
 boolean_t VAR_9 = VAR_1;


 FUNC_5(VAR_7);

 FUNC_0(VAR_2,
  (FUNC_1(VAR_5, (VAR_6))) | VAR_0,
  FUNC_7(VAR_7),
  FUNC_2(VAR_8),
  0, 0, 0);

 if (FUNC_3(&VAR_7->inheritor_queue,
   &VAR_8->ts_inheritor_links,
   VAR_3)) {

  VAR_9 = FUNC_6(VAR_7);
 }


 if (!VAR_9) {
  FUNC_9(1,
   FUNC_4(VAR_7) | VAR_4,
   VAR_8);
 }

 FUNC_8(VAR_7);
 return VAR_9;
}
