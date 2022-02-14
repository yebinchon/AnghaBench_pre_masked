
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {int numfds; scalar_t__* state; size_t pos; scalar_t__ buf; int * fds; } ;
struct TYPE_6__ {TYPE_1__ fdset; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,size_t) ;

__attribute__((used)) static size_t FUNC_4(rio *VAR_5, const void *VAR_6, size_t VAR_7) {
    ssize_t VAR_8;
    int VAR_9;
    unsigned char *VAR_10 = (unsigned char*) VAR_6;
    int VAR_11 = (VAR_6 == ((void*)0) && VAR_7 == 0);



    if (VAR_7) {
        VAR_5->io.fdset.buf = FUNC_0(VAR_5->io.fdset.buf,VAR_6,VAR_7);
        VAR_7 = 0;
        if (FUNC_2(VAR_5->io.fdset.buf) > VAR_3) VAR_11 = 1;
    }

    if (VAR_11) {
        VAR_10 = (unsigned char*) VAR_5->io.fdset.buf;
        VAR_7 = FUNC_2(VAR_5->io.fdset.buf);
    }




    while(VAR_7) {
        size_t VAR_12 = VAR_7 < 1024 ? VAR_7 : 1024;
        int VAR_13 = 0;
        for (VAR_9 = 0; VAR_9 < VAR_5->io.fdset.numfds; VAR_9++) {
            if (VAR_5->io.fdset.state[VAR_9] != 0) {

                VAR_13++;
                continue;
            }



            size_t VAR_14 = 0;
            while(VAR_14 != VAR_12) {
                VAR_8 = FUNC_3(VAR_5->io.fdset.fds[VAR_9],VAR_10+VAR_14,VAR_12-VAR_14);
                if (VAR_8 <= 0) {




                    if (VAR_8 == -1 && VAR_4 == VAR_2) VAR_4 = VAR_1;
                    break;
                }
                VAR_14 += VAR_8;
            }

            if (VAR_14 != VAR_12) {

                VAR_5->io.fdset.state[VAR_9] = VAR_4;
                if (VAR_5->io.fdset.state[VAR_9] == 0) VAR_5->io.fdset.state[VAR_9] = VAR_0;
            }
        }
        if (VAR_13 == VAR_5->io.fdset.numfds) return 0;
        VAR_10 += VAR_12;
        VAR_7 -= VAR_12;
        VAR_5->io.fdset.pos += VAR_12;
    }

    if (VAR_11) FUNC_1(VAR_5->io.fdset.buf);
    return 1;
}
