
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wiimote ;
typedef size_t u32 ;
struct bd_addr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* active; } ;
struct TYPE_3__ {int * bdaddr; } ;


 int FUNC_0 (struct bd_addr*,int ,int ,int ,int ,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 TYPE_2__ VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct bd_addr*,struct bd_addr*) ;

wiimote *FUNC_4(struct bd_addr *VAR_5)
{
    u32 VAR_6, VAR_7;
    struct bd_addr VAR_8;

    FUNC_1(VAR_7);


    for(VAR_6=0; VAR_6<VAR_0 ; VAR_6++) {
        FUNC_0(&(VAR_8),VAR_2.active[VAR_6].bdaddr[5],VAR_2.active[VAR_6].bdaddr[4],VAR_2.active[VAR_6].bdaddr[3],VAR_2.active[VAR_6].bdaddr[2],VAR_2.active[VAR_6].bdaddr[1],VAR_2.active[VAR_6].bdaddr[0]);
        if(FUNC_3(VAR_5,&VAR_8) && !(VAR_4 & (1<<VAR_6))) {

            VAR_4 |= (0x01<<VAR_6);
            FUNC_2(VAR_7);
            return VAR_3[VAR_6];
        }
    }


    for(VAR_6=0; VAR_6<VAR_1; VAR_6++) {
        if(!(VAR_4 & (1<<VAR_6))) {

            VAR_4 |= (0x01<<VAR_6);
            FUNC_2(VAR_7);
            return VAR_3[VAR_6];
        }
    }

    FUNC_2(VAR_7);
    return ((void*)0);
}
