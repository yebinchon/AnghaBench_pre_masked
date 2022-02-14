
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_2(const char *VAR_1) {
 FUNC_1(VAR_0, "usage: %s [options]\n", VAR_1);
 FUNC_1(VAR_0, "where options are:\n");
 FUNC_1(VAR_0, "    -affinity\t\tthreads use affinity\n");
 FUNC_1(VAR_0, "    -timeshare\t\tthreads use timeshare\n");
 FUNC_1(VAR_0, "    -threaded\t\tuse (p)threads\n");
 FUNC_1(VAR_0, "    -verbose\t\tbe verbose\n");
 FUNC_1(VAR_0, "    -oneway\t\tdo not request return reply\n");
 FUNC_1(VAR_0, "    -count num\t\tnumber of messages to send\n");
 FUNC_1(VAR_0, "    -type trivial|inline|complex\ttype of messages to send\n");
 FUNC_1(VAR_0, "    -numints num\tnumber of 32-bit ints to send in messages\n");
 FUNC_1(VAR_0, "    -servers num\tnumber of servers threads to run\n");
 FUNC_1(VAR_0, "    -clients num\tnumber of clients per server\n");
 FUNC_1(VAR_0, "    -delay num\t\tmicroseconds to sleep clients between messages\n");
 FUNC_1(VAR_0, "    -work num\t\tmicroseconds of client work\n");
 FUNC_1(VAR_0, "    -pages num\t\tpages of memory touched by client work\n");
 FUNC_1(VAR_0, "    -select   \t\tselect prior to calling kevent().\n");
 FUNC_1(VAR_0, "    -perf   \t\tCreate perfdata files for metrics.\n");
 FUNC_1(VAR_0, "default values are:\n");
 FUNC_1(VAR_0, "    . no affinity\n");
 FUNC_1(VAR_0, "    . not timeshare\n");
 FUNC_1(VAR_0, "    . not verbose\n");
 FUNC_1(VAR_0, "    . not oneway\n");
 FUNC_1(VAR_0, "    . client sends 100000 messages\n");
 FUNC_1(VAR_0, "    . inline message type\n");
 FUNC_1(VAR_0, "    . 64 32-bit integers in inline/complex messages\n");
 FUNC_1(VAR_0, "    . (num_available_processors+1)%%2 servers\n");
 FUNC_1(VAR_0, "    . 4 clients per server\n");
 FUNC_1(VAR_0, "    . no delay\n");
 FUNC_0(1);
}
