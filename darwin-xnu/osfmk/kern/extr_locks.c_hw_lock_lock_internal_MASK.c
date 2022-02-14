
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* hw_lock_t ;
struct TYPE_7__ {uintptr_t lock_data; } ;


 uintptr_t FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (uintptr_t*,int ,uintptr_t,int ,int ) ;
 int FUNC_3 (TYPE_1__*,uintptr_t,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static inline void
FUNC_6(hw_lock_t VAR_5, thread_t VAR_6)
{
 uintptr_t VAR_7;

 VAR_7 = FUNC_0(VAR_6) | VAR_1;
 if (VAR_5->lock_data)
  FUNC_5("Spinlock held %p", VAR_5);
 VAR_5->lock_data = VAR_7;




 return;
}
