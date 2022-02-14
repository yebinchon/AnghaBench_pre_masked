
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int syncrate; int wantsync; int use; void* dir; void* filesize; } ;
struct TYPE_5__ {TYPE_1__ wal; void* user; void* addr; void* port; } ;
typedef TYPE_2__ Server ;


 void* FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* VAR_1 ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_6 (char*,void*) ;
 int FUNC_7 (char*,...) ;

void
FUNC_8(Server *VAR_4, char **VAR_5)
{
    int64 VAR_6;
    char *VAR_7, *VAR_8;


    while ((VAR_7 = *VAR_5++) && *VAR_7++ == '-' && *VAR_7) {
        char VAR_9;
        while ((VAR_9 = *VAR_7++)) {
            switch (VAR_9) {
                case 'p':
                    VAR_4->port = (*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-p")));
                    FUNC_6("-p", VAR_4->port);
                    break;
                case 'l':
                    VAR_4->addr = (*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-l")));
                    FUNC_6("-l", VAR_4->addr);
                    break;
                case 'z':
                    VAR_1 = FUNC_3((*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-z"))));
                    if (VAR_1 > VAR_0) {
                        FUNC_7("maximum job size was set to %d", VAR_0);
                        VAR_1 = VAR_0;
                    }
                    break;
                case 's':
                    VAR_4->wal.filesize = FUNC_3((*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-s"))));
                    break;
                case 'c':
                    FUNC_7("-c flag was removed. binlog is always compacted.");
                    break;
                case 'n':
                    FUNC_7("-n flag was removed. binlog is always compacted.");
                    break;
                case 'f':
                    VAR_6 = (int64)FUNC_3((*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-f"))));
                    VAR_4->wal.syncrate = VAR_6 * 1000000;
                    VAR_4->wal.wantsync = 1;
                    break;
                case 'F':
                    VAR_4->wal.wantsync = 0;
                    break;
                case 'u':
                    VAR_4->user = (*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-u")));
                    break;
                case 'b':
                    VAR_4->wal.dir = (*VAR_7 ? (VAR_8=VAR_7,VAR_7="",VAR_8) : *VAR_5 ? *VAR_5++ : (FUNC_2("-b")));
                    VAR_4->wal.use = 1;
                    break;
                case 'h':
                    FUNC_5(0);
                case 'v':
                    FUNC_4("beanstalkd %s\n", VAR_3);
                    FUNC_1(0);
                case 'V':
                    VAR_2++;
                    break;
                default:
                    FUNC_7("unknown flag: %s", VAR_7-2);
                    FUNC_5(5);
            }
        }
    }
    if (VAR_7) {
        FUNC_7("unknown argument: %s", VAR_7-1);
        FUNC_5(5);
    }
}
