
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ sa_family; scalar_t__ ss_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; scalar_t__ ss_family; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct ip_mreq_source {TYPE_2__ imr_sourceaddr; TYPE_3__ imr_interface; TYPE_1__ imr_multiaddr; } ;
struct group_source_req {int gsr_source; int gsr_group; scalar_t__ gsr_interface; } ;
typedef int mreqs ;
typedef int URLContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_5 (int,int,int ,void const*,int) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_11,
                                     int VAR_12, struct sockaddr *VAR_13,
                                     int VAR_14, struct sockaddr_storage *VAR_15,
                                     struct sockaddr_storage *VAR_16,
                                     int VAR_17, int VAR_18)
{
    int VAR_19;
    if (VAR_13->sa_family != VAR_0) {
        FUNC_1(VAR_11, VAR_1,
               "Setting multicast sources only supported for IPv4\n");
        return FUNC_0(VAR_2);

    }
    return FUNC_0(VAR_3);

    return 0;
}
