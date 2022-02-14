
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
struct fpx_event {scalar_t__ const fe_code; scalar_t__ const fe_xcpt; int fe_uuid; } ;


 scalar_t__ FUNC_0 (int const,int ,int) ;

__attribute__((used)) static bool
FUNC_1(const struct fpx_event *VAR_0,
    const uuid_t VAR_1, const uint32_t VAR_2, const uint32_t VAR_3)
{
 return (VAR_2 == VAR_0->fe_code && VAR_3 == VAR_0->fe_xcpt &&
     0 == FUNC_0(VAR_1, VAR_0->fe_uuid, sizeof (uuid_t)));
}
