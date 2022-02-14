
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* maxstring; void* minstring; void** bulkhdr; void** mbulkhdr; TYPE_1__** integers; void* deljob; void* loadjob; void* punsubscribebulk; void* psubscribebulk; void* unsubscribebulk; void* subscribebulk; void* pmessagebulk; void* messagebulk; void* plus; void* colon; void* space; void* busykeyerr; void* noreplicaserr; void* execaborterr; void* oomerr; void* noautherr; void* roslaveerr; void* masterdownerr; void* slowscripterr; void* loadingerr; void* noscripterr; void* outofrangeerr; void* leavingerr; void* syntaxerr; void* nokeyerr; void* wrongtypeerr; void* queued; void* pong; void* emptymultibulk; void* nullmultibulk; void* nullbulk; void* cnegone; void* cone; void* czero; void* emptybulk; void* err; void* ok; void* crlf; } ;
struct TYPE_3__ {int encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,void*) ;
 void* FUNC_1 (char*,int) ;
 void* FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 void* FUNC_4 (char*) ;
 TYPE_2__ VAR_4 ;

void FUNC_5(void) {
    int VAR_5;

    VAR_4.crlf = FUNC_0(VAR_3,FUNC_4("\r\n"));
    VAR_4.ok = FUNC_0(VAR_3,FUNC_4("+OK\r\n"));
    VAR_4.err = FUNC_0(VAR_3,FUNC_4("-ERR\r\n"));
    VAR_4.emptybulk = FUNC_0(VAR_3,FUNC_4("$0\r\n\r\n"));
    VAR_4.czero = FUNC_0(VAR_3,FUNC_4(":0\r\n"));
    VAR_4.cone = FUNC_0(VAR_3,FUNC_4(":1\r\n"));
    VAR_4.cnegone = FUNC_0(VAR_3,FUNC_4(":-1\r\n"));
    VAR_4.nullbulk = FUNC_0(VAR_3,FUNC_4("$-1\r\n"));
    VAR_4.nullmultibulk = FUNC_0(VAR_3,FUNC_4("*-1\r\n"));
    VAR_4.emptymultibulk = FUNC_0(VAR_3,FUNC_4("*0\r\n"));
    VAR_4.pong = FUNC_0(VAR_3,FUNC_4("+PONG\r\n"));
    VAR_4.queued = FUNC_0(VAR_3,FUNC_4("+QUEUED\r\n"));
    VAR_4.wrongtypeerr = FUNC_0(VAR_3,FUNC_4(
        "-WRONGTYPE Operation against a key holding the wrong kind of value\r\n"));
    VAR_4.nokeyerr = FUNC_0(VAR_3,FUNC_4(
        "-ERR no such key\r\n"));
    VAR_4.syntaxerr = FUNC_0(VAR_3,FUNC_4(
        "-ERR syntax error\r\n"));
    VAR_4.leavingerr = FUNC_0(VAR_3,FUNC_4(
        "-LEAVING This node is leaving the cluster, "
        "please connect to a different one\r\n"));
    VAR_4.outofrangeerr = FUNC_0(VAR_3,FUNC_4(
        "-ERR index out of range\r\n"));
    VAR_4.noscripterr = FUNC_0(VAR_3,FUNC_4(
        "-NOSCRIPT No matching script. Please use EVAL.\r\n"));
    VAR_4.loadingerr = FUNC_0(VAR_3,FUNC_4(
        "-LOADING Disque is loading the dataset in memory\r\n"));
    VAR_4.slowscripterr = FUNC_0(VAR_3,FUNC_4(
        "-BUSY Disque is busy running a script. You can only call SCRIPT KILL or SHUTDOWN NOSAVE.\r\n"));
    VAR_4.masterdownerr = FUNC_0(VAR_3,FUNC_4(
        "-MASTERDOWN Link with MASTER is down and slave-serve-stale-data is set to 'no'.\r\n"));
    VAR_4.roslaveerr = FUNC_0(VAR_3,FUNC_4(
        "-READONLY You can't write against a read only slave.\r\n"));
    VAR_4.noautherr = FUNC_0(VAR_3,FUNC_4(
        "-NOAUTH Authentication required.\r\n"));
    VAR_4.oomerr = FUNC_0(VAR_3,FUNC_4(
        "-OOM command not allowed when used memory > 'maxmemory'.\r\n"));
    VAR_4.execaborterr = FUNC_0(VAR_3,FUNC_4(
        "-EXECABORT Transaction discarded because of previous errors.\r\n"));
    VAR_4.noreplicaserr = FUNC_0(VAR_3,FUNC_4(
        "-NOREPLICAS Not enough good slaves to write.\r\n"));
    VAR_4.busykeyerr = FUNC_0(VAR_3,FUNC_4(
        "-BUSYKEY Target key name already exists.\r\n"));
    VAR_4.space = FUNC_0(VAR_3,FUNC_4(" "));
    VAR_4.colon = FUNC_0(VAR_3,FUNC_4(":"));
    VAR_4.plus = FUNC_0(VAR_3,FUNC_4("+"));
    VAR_4.messagebulk = FUNC_1("$7\r\nmessage\r\n",13);
    VAR_4.pmessagebulk = FUNC_1("$8\r\npmessage\r\n",14);
    VAR_4.subscribebulk = FUNC_1("$9\r\nsubscribe\r\n",15);
    VAR_4.unsubscribebulk = FUNC_1("$11\r\nunsubscribe\r\n",18);
    VAR_4.psubscribebulk = FUNC_1("$10\r\npsubscribe\r\n",17);
    VAR_4.punsubscribebulk = FUNC_1("$12\r\npunsubscribe\r\n",19);
    VAR_4.loadjob = FUNC_1("LOADJOB",7);
    VAR_4.deljob = FUNC_1("DELJOB",6);
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_4.integers[VAR_5] = FUNC_0(VAR_3,(void*)(long)VAR_5);
        VAR_4.integers[VAR_5]->encoding = VAR_0;
    }
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_4.mbulkhdr[VAR_5] = FUNC_0(VAR_3,
            FUNC_2(FUNC_3(),"*%d\r\n",VAR_5));
        VAR_4.bulkhdr[VAR_5] = FUNC_0(VAR_3,
            FUNC_2(FUNC_3(),"$%d\r\n",VAR_5));
    }




    VAR_4.minstring = FUNC_1("minstring",9);
    VAR_4.maxstring = FUNC_1("maxstring",9);
}
