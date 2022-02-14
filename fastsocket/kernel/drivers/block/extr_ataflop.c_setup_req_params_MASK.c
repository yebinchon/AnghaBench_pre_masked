
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int spt; } ;
struct TYPE_3__ {scalar_t__ errors; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_1( int VAR_13 )
{
 int VAR_14 = VAR_1 + VAR_4;

 VAR_8 = VAR_14 / VAR_9->spt;
 VAR_6 = VAR_14 - VAR_8 * VAR_9->spt + 1;
 VAR_7 = VAR_8 & 1;
 VAR_8 >>= 1;
 VAR_5 = VAR_2 + 512 * VAR_4;

 if (VAR_10)
  VAR_12 = (VAR_3 == VAR_0 && VAR_11->errors == 0);
 else
  VAR_12 = 0;

 FUNC_0(("Request params: Si=%d Tr=%d Se=%d Data=%08lx\n",VAR_7,
   VAR_8, VAR_6, (unsigned long)VAR_5 ));
}
