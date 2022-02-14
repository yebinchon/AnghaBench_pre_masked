
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* hw_lock_t ;
struct TYPE_5__ {int lock_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int ,int,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline unsigned int
FUNC_4(hw_lock_t VAR_4, thread_t VAR_5)
{
 int VAR_6 = 0;
 if (VAR_4->lock_data == 0) {
  VAR_4->lock_data = FUNC_0(VAR_5) | VAR_2;
  VAR_6 = 1;
 }
 return VAR_6;
}
