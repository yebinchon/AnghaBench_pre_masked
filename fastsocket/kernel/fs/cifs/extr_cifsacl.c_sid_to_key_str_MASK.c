
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int num_subauth; char* authority; int * sub_auth; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned int,...) ;

__attribute__((used)) static char *
FUNC_3(struct cifs_sid *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9;
 char *VAR_10, *VAR_11;


 VAR_10 = FUNC_0(3 + VAR_3 +
    (VAR_4 * VAR_5->num_subauth),
    VAR_0);
 if (!VAR_10)
  return VAR_10;

 VAR_11 = VAR_10;
 VAR_8 = FUNC_2(VAR_11, "%cs:S-%hhu", VAR_6 == VAR_2 ? 'o' : 'g',
   VAR_5->revision);
 VAR_11 += VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (VAR_5->authority[VAR_7]) {
   VAR_8 = FUNC_2(VAR_11, "-%hhu", VAR_5->authority[VAR_7]);
   VAR_11 += VAR_8;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_subauth; ++VAR_7) {
  VAR_9 = FUNC_1(VAR_5->sub_auth[VAR_7]);
  VAR_8 = FUNC_2(VAR_11, "-%u", VAR_9);
  VAR_11 += VAR_8;
 }

 return VAR_10;
}
