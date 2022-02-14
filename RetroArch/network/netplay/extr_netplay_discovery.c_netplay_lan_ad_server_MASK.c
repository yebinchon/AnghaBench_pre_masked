
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int their_addr ;
struct timeval {int member_0; } ;
struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct retro_system_info {char* library_name; char* library_version; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int member_0; } ;
struct ad_packet {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int s ;
struct TYPE_14__ {scalar_t__ tcp_port; char* nick; } ;
typedef TYPE_3__ netplay_t ;
struct TYPE_15__ {unsigned int size; TYPE_2__* entries; } ;
typedef TYPE_4__ net_ifinfo_t ;
typedef int frontend ;
typedef int fd_set ;
struct TYPE_16__ {char* address; char* content; char* subsystem_name; char* retroarch_version; char* nick; char* frontend; char* core; char* core_version; char* content_crc; void* port; void* protocol_version; } ;
struct TYPE_13__ {char* host; } ;
struct TYPE_12__ {char* data; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (struct addrinfo*) ;
 scalar_t__ FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_9 (void*,char*,int) ;
 int FUNC_10 (TYPE_8__*,char*,int) ;
 int FUNC_11 (TYPE_8__*,int ,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (char*,int) ;
 scalar_t__ FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 char* FUNC_17 (char*) ;
 char* FUNC_18 (int ) ;
 struct string_list* FUNC_19 () ;
 scalar_t__ FUNC_20 (scalar_t__,char*,int,int ,struct sockaddr*,int*) ;
 struct retro_system_info* FUNC_21 () ;
 int FUNC_22 (scalar_t__,char const*,int,int ,int ,int ) ;
 int FUNC_23 (char*,int,char*,int) ;
 scalar_t__ FUNC_24 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,int) ;
 int FUNC_27 (char*,char*,int) ;
 char* FUNC_28 (char*,char) ;
 scalar_t__ FUNC_29 (char*,char*) ;

bool FUNC_30(netplay_t *VAR_9)
{
   return 1;
}
