
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DataLength; int DataLengthHigh; } ;
typedef TYPE_1__ READ_RSP ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_1(char *VAR_0)
{
 READ_RSP *VAR_1 = (READ_RSP *)VAR_0;
 return (FUNC_0(VAR_1->DataLengthHigh) << 16) +
        FUNC_0(VAR_1->DataLength);
}
