
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_mppe_state {unsigned char* master_key; unsigned char* session_key; int * arc4; int * sha1; struct ppp_mppe_state* sha1_digest; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int VAR_4 ;
 int * FUNC_1 (char*,int ,int ) ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (struct ppp_mppe_state*) ;
 struct ppp_mppe_state* FUNC_7 (unsigned int,int ) ;
 struct ppp_mppe_state* FUNC_8 (int,int ) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void *FUNC_10(unsigned char *VAR_5, int VAR_6)
{
 struct ppp_mppe_state *VAR_7;
 unsigned int VAR_8;

 if (VAR_6 != VAR_0 + sizeof(VAR_7->master_key)
     || VAR_5[0] != VAR_1 || VAR_5[1] != VAR_0)
  goto out;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  goto out;


 VAR_7->arc4 = FUNC_1("ecb(arc4)", 0, VAR_2);
 if (FUNC_0(VAR_7->arc4)) {
  VAR_7->arc4 = ((void*)0);
  goto out_free;
 }

 VAR_7->sha1 = FUNC_2("sha1", 0, VAR_2);
 if (FUNC_0(VAR_7->sha1)) {
  VAR_7->sha1 = ((void*)0);
  goto out_free;
 }

 VAR_8 = FUNC_5(VAR_7->sha1);
 if (VAR_8 < VAR_4)
  goto out_free;

 VAR_7->sha1_digest = FUNC_7(VAR_8, VAR_3);
 if (!VAR_7->sha1_digest)
  goto out_free;


 FUNC_9(VAR_7->master_key, &VAR_5[VAR_0],
        sizeof(VAR_7->master_key));
 FUNC_9(VAR_7->session_key, VAR_7->master_key,
        sizeof(VAR_7->master_key));






 return (void *)VAR_7;

 out_free:
     if (VAR_7->sha1_digest)
  FUNC_6(VAR_7->sha1_digest);
     if (VAR_7->sha1)
  FUNC_4(VAR_7->sha1);
     if (VAR_7->arc4)
  FUNC_3(VAR_7->arc4);
     FUNC_6(VAR_7);
 out:
 return ((void*)0);
}
