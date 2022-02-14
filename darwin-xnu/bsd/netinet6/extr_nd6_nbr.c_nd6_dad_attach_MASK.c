
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int dummy; } ;
struct dadq {int dad_attached; scalar_t__ dad_lladdrlen; scalar_t__ dad_loopbackprobe; scalar_t__ dad_ns_lcount; scalar_t__ dad_ns_tcount; scalar_t__ dad_ns_ocount; scalar_t__ dad_na_icount; scalar_t__ dad_ns_icount; int dad_count; struct ifaddr* dad_ifa; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (struct dadq*) ;
 int FUNC_3 (struct ifaddr*) ;
 int FUNC_4 (int *,struct dadq*,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct dadq *
FUNC_8(struct dadq *VAR_4, struct ifaddr *VAR_5)
{
 FUNC_6(VAR_0);
 FUNC_1(VAR_4);
 VAR_4->dad_ifa = VAR_5;
 FUNC_3(VAR_5);
 VAR_4->dad_count = VAR_3;
 VAR_4->dad_ns_icount = VAR_4->dad_na_icount = 0;
 VAR_4->dad_ns_ocount = VAR_4->dad_ns_tcount = 0;
 VAR_4->dad_ns_lcount = VAR_4->dad_loopbackprobe = 0;
 FUNC_5(!VAR_4->dad_attached);
 VAR_4->dad_attached = 1;
 VAR_4->dad_lladdrlen = 0;
 FUNC_0(VAR_4);
 FUNC_0(VAR_4);
 FUNC_4(&VAR_2, (struct dadq *)VAR_4, VAR_1);
 FUNC_2(VAR_4);
 FUNC_7(VAR_0);

 return (VAR_4);
}
