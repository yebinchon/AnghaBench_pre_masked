
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {scalar_t__ respond_next; scalar_t__ respond_head; int u132_lock; struct u132_respond* respond; } ;
struct u132_respond {int wait_completion; scalar_t__* value; int * result; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_ftdi *VAR_2)
{
        FUNC_1(&VAR_2->u132_lock);
        while (VAR_2->respond_next > VAR_2->respond_head) {
                struct u132_respond *VAR_3 = &VAR_2->respond[VAR_1 &
                        VAR_2->respond_head++];
                *VAR_3->result = -VAR_0;
                *VAR_3->value = 0;
                FUNC_0(&VAR_3->wait_completion);
        } FUNC_2(&VAR_2->u132_lock);
}
