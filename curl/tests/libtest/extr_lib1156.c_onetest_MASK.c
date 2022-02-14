
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int urlbuf ;
struct TYPE_3__ {int flags; scalar_t__ result; } ;
typedef TYPE_1__ testparams ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,int,char*,char const*,unsigned int) ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,...) ;

__attribute__((used)) static int FUNC_4(CURL *VAR_11, const char *VAR_12, const testparams *VAR_13)
{
  CURLcode VAR_14;
  unsigned int VAR_15;
  char VAR_16[256];

  VAR_15 = (VAR_13->flags & VAR_4)? 1: 0;
  if(VAR_13->flags & VAR_6)
    VAR_15 += 2;
  FUNC_2(VAR_16, sizeof(VAR_16), "%s%04u", VAR_12, VAR_15);
  FUNC_3(VAR_11, VAR_3, VAR_16);
  FUNC_3(VAR_11, VAR_2, (VAR_13->flags & VAR_8)? 3: 0);
  FUNC_3(VAR_11, VAR_1, !(VAR_13->flags & VAR_8)?
                                   "3-1000000": (char *) ((void*)0));
  FUNC_3(VAR_11, VAR_0, (VAR_13->flags & VAR_5)? 1: 0);
  VAR_9 = 0;
  VAR_14 = FUNC_0(VAR_11);
  if(VAR_14 != VAR_13->result) {
    FUNC_1(VAR_10, "bad error code (%s): resume=%s, fail=%s, http416=%s, "
                    "content-range=%s, expected=%ld\n", VAR_14,
                    (VAR_13->flags & VAR_8)? "yes": "no",
                    (VAR_13->flags & VAR_5)? "yes": "no",
                    (VAR_13->flags & VAR_6)? "yes": "no",
                    (VAR_13->flags & VAR_4)? "yes": "no",
                    VAR_13->result);
    return 1;
  }
  if(VAR_9 && (VAR_13->flags & VAR_7)) {
    FUNC_1(VAR_10, "body should be ignored and is not: resume=%s, fail=%s, "
                    "http416=%s, content-range=%s\n",
                    (VAR_13->flags & VAR_8)? "yes": "no",
                    (VAR_13->flags & VAR_5)? "yes": "no",
                    (VAR_13->flags & VAR_6)? "yes": "no",
                    (VAR_13->flags & VAR_4)? "yes": "no");
    return 1;
  }
  return 0;

  test_cleanup:

  return 1;
}
