
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pop3_conn {int pp; scalar_t__ apoptimestamp; } ;
struct TYPE_4__ {int user_passwd; } ;
struct TYPE_3__ {struct pop3_conn pop3c; } ;
struct connectdata {int user; scalar_t__ passwd; TYPE_2__ bits; TYPE_1__ proto; } ;
typedef int MD5_context ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char const*,int ) ;
 int FUNC_3 (int *,char*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,unsigned char) ;
 int FUNC_6 (struct connectdata*,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static CURLcode FUNC_8(struct connectdata *VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  struct pop3_conn *VAR_8 = &VAR_6->proto.pop3c;
  size_t VAR_9;
  MD5_context *VAR_10;
  unsigned char VAR_11[VAR_3];
  char VAR_12[2 * VAR_3 + 1];



  if(!VAR_6->bits.user_passwd) {
    FUNC_6(VAR_6, VAR_5);

    return VAR_7;
  }


  VAR_10 = FUNC_1(VAR_2);
  if(!VAR_10)
    return VAR_1;

  FUNC_2(VAR_10, (const unsigned char *) VAR_8->apoptimestamp,
                  FUNC_4(FUNC_7(VAR_8->apoptimestamp)));

  FUNC_2(VAR_10, (const unsigned char *) VAR_6->passwd,
                  FUNC_4(FUNC_7(VAR_6->passwd)));


  FUNC_0(VAR_10, VAR_11);


  for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    FUNC_5(&VAR_12[2 * VAR_9], 3, "%02x", VAR_11[VAR_9]);

  VAR_7 = FUNC_3(&VAR_8->pp, "APOP %s %s", VAR_6->user, VAR_12);

  if(!VAR_7)
    FUNC_6(VAR_6, VAR_4);

  return VAR_7;
}
