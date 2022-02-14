
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ibf; int wi; int ibf_lock; int status_io; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(uint8_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0.ibf_lock, VAR_2);
 VAR_0.ibf = 1;
 if ((VAR_1 & 0xf0) == 0xe0)
  VAR_0.wi = 0xff;
 FUNC_0(VAR_1, VAR_0.status_io);
 FUNC_2(&VAR_0.ibf_lock, VAR_2);
}
