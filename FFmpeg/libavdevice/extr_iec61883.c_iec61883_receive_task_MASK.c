
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revents; } ;
struct iec61883_data {int receiving; int eof; int mutex; int cond; int raw1394; TYPE_1__ raw1394_poll; int receive_error; scalar_t__ thread_loop; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void *FUNC_7(void *VAR_7)
{
    struct iec61883_data *VAR_8 = (struct iec61883_data *)VAR_7;
    int VAR_9;




    {
        while ((VAR_9 = FUNC_2(&VAR_8->raw1394_poll, 1, 200)) < 0) {
            if (!(VAR_6 == VAR_1 || VAR_6 == VAR_2)) {
                FUNC_1(((void*)0), VAR_0, "Raw1394 poll error occurred.\n");
                VAR_8->receive_error = FUNC_0(VAR_3);
                return ((void*)0);
            }
        }
        if (VAR_9 > 0 && ((VAR_8->raw1394_poll.revents & VAR_4)
                           || (VAR_8->raw1394_poll.revents & VAR_5))) {
            VAR_8->receiving = 1;
            FUNC_6(VAR_8->raw1394);
        } else if (VAR_8->receiving) {
            FUNC_1(((void*)0), VAR_0, "No more input data available\n");






            VAR_8->eof = 1;

            return ((void*)0);
        }
    }

    return ((void*)0);
}
