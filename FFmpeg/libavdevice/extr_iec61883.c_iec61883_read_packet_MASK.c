
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iec61883_data {int (* parse_queue ) (struct iec61883_data*,int *) ;int receive_error; int mutex; int cond; int eof; } ;
struct TYPE_3__ {struct iec61883_data* priv_data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iec61883_data*,int *) ;
 int FUNC_5 (struct iec61883_data*,int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    struct iec61883_data *VAR_2 = VAR_0->priv_data;
    int VAR_3;
    int VAR_4;
    while ((VAR_3 = VAR_2->parse_queue(VAR_2, VAR_1)) == -1) {
        FUNC_0((void *)VAR_2);
        if (VAR_2->receive_error)
            return VAR_2->receive_error;
    }


    return VAR_3;
}
