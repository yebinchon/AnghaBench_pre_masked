
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sec_t ;
struct TYPE_3__ {int (* readSectors ) (int ,int ,void*) ;} ;
typedef TYPE_1__ DISC_INTERFACE ;


 int FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static inline bool FUNC_1 (const DISC_INTERFACE* VAR_0, sec_t VAR_1, sec_t VAR_2, void* VAR_3)
{
 return VAR_0->readSectors (VAR_1, VAR_2, VAR_3);
}
