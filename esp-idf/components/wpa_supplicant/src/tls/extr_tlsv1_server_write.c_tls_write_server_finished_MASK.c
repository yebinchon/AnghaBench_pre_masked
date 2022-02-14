
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ tls_version; } ;
struct TYPE_4__ {int * sha1_server; int * md5_server; int * sha256_server; } ;
struct tlsv1_server {TYPE_1__ rl; TYPE_2__ verify; int master_secret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,char*,int *,size_t,int *,int) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_5 (struct tlsv1_server*,int ,int ) ;
 int FUNC_6 (int ,char*,int *,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_server *VAR_11,
         u8 **VAR_12, u8 *VAR_13)
{
 u8 *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 u8 VAR_18[1 + 3 + VAR_9];
 u8 VAR_19[VAR_0 + VAR_2];

 VAR_14 = *VAR_12;

 FUNC_7(VAR_1, "TLSv1: Send Finished");
 VAR_17 = VAR_0;
 if (VAR_11->verify.md5_server == ((void*)0) ||
     FUNC_1(VAR_11->verify.md5_server, VAR_19, &VAR_17) < 0) {
  FUNC_5(VAR_11, VAR_5,
       VAR_4);
  VAR_11->verify.md5_server = ((void*)0);
  FUNC_1(VAR_11->verify.sha1_server, ((void*)0), ((void*)0));
  VAR_11->verify.sha1_server = ((void*)0);
  return -1;
 }
 VAR_11->verify.md5_server = ((void*)0);
 VAR_17 = VAR_2;
 if (VAR_11->verify.sha1_server == ((void*)0) ||
     FUNC_1(VAR_11->verify.sha1_server, VAR_19 + VAR_0,
          &VAR_17) < 0) {
  VAR_11->verify.sha1_server = ((void*)0);
  FUNC_5(VAR_11, VAR_5,
       VAR_4);
  return -1;
 }
 VAR_11->verify.sha1_server = ((void*)0);
 VAR_17 = VAR_0 + VAR_2;





 if (FUNC_2(VAR_11->rl.tls_version,
      VAR_11->master_secret, VAR_8,
      "server finished", VAR_19, VAR_17,
      VAR_18 + 1 + 3, VAR_9)) {
  FUNC_7(VAR_1, "TLSv1: Failed to generate verify_data");
  FUNC_5(VAR_11, VAR_5,
       VAR_4);
  return -1;
 }
 FUNC_6(VAR_1, "TLSv1: verify_data (server)",
   VAR_18 + 1 + 3, VAR_9);


 VAR_14 = VAR_15 = VAR_18;

 *VAR_14++ = VAR_7;

 FUNC_0(VAR_14, VAR_9);
 VAR_14 += 3;
 VAR_14 += VAR_9;
 FUNC_3(&VAR_11->verify, VAR_15, VAR_14 - VAR_15);

 if (FUNC_4(&VAR_11->rl, VAR_6,
         *VAR_12, VAR_13 - *VAR_12, VAR_15, VAR_14 - VAR_15,
         &VAR_16) < 0) {
  FUNC_7(VAR_1, "TLSv1: Failed to create a record");
  FUNC_5(VAR_11, VAR_5,
       VAR_4);
  return -1;
 }

 *VAR_12 += VAR_16;

 return 0;
}
