
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct kevent {void* filter; TYPE_1__* udata; int flags; int data; int fflags; int ident; int member_0; } ;
struct TYPE_3__ {void* added; int fd; } ;
typedef TYPE_1__ Socket ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct kevent*,int,int *,int ,struct timespec*) ;
 int VAR_6 ;

int
FUNC_1(Socket *VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    struct kevent VAR_10[2] = {{0}};
    struct kevent *VAR_11 = VAR_10;
    struct timespec VAR_12 = {.tv_sec = 0, .tv_nsec = 0};

    if (VAR_7->added) {
        VAR_11->ident = VAR_7->fd;
        VAR_11->filter = VAR_7->added;
        VAR_11->flags = VAR_3;
        VAR_11++;
        VAR_9++;
    }

    if (VAR_8) {
        VAR_11->ident = VAR_7->fd;
        switch (VAR_8) {
        case 'r':
            VAR_11->filter = VAR_0;
            break;
        case 'w':
            VAR_11->filter = VAR_1;
            break;
        default:

            VAR_11->filter = VAR_0;
            VAR_11->fflags = VAR_5;
            VAR_11->data = VAR_4;
        }
        VAR_11->flags = VAR_2;
        VAR_11->udata = VAR_7;
        VAR_7->added = VAR_11->filter;
        VAR_11++;
        VAR_9++;
    }

    return FUNC_0(VAR_6, VAR_10, VAR_9, ((void*)0), 0, &VAR_12);
}
