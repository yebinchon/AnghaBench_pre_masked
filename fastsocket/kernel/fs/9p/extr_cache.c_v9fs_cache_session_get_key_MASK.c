
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct v9fs_session_info {int cachetag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct v9fs_session_info*,...) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uint16_t FUNC_3(const void *VAR_1,
        void *VAR_2, uint16_t VAR_3)
{
 struct v9fs_session_info *VAR_4;
 uint16_t VAR_5 = 0;

 VAR_4 = (struct v9fs_session_info *)VAR_1;
 FUNC_0(VAR_0, "session %p buf %p size %u", VAR_4,
     VAR_2, VAR_3);

 if (VAR_4->cachetag)
  VAR_5 = FUNC_2(VAR_4->cachetag);

 if (VAR_5 > VAR_3)
  return 0;

 FUNC_1(VAR_2, VAR_4->cachetag, VAR_5);
 FUNC_0(VAR_0, "cache session tag %s", VAR_4->cachetag);
 return VAR_5;
}
