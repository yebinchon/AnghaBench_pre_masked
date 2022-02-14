
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_algorithm_identifier {int oid; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int const*,int,int *,int const**) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
 const u8 *VAR_3, size_t VAR_4,
 struct x509_algorithm_identifier *VAR_5, const u8 **VAR_6)
{
 struct asn1_hdr VAR_7;
 const u8 *VAR_8, *VAR_9;
 if (FUNC_0(VAR_3, VAR_4, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_2(VAR_2, "X509: Expected SEQUENCE "
      "(AlgorithmIdentifier) - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  return -1;
 }
 VAR_8 = VAR_7.payload;
 VAR_9 = VAR_8 + VAR_7.length;

 if (VAR_9 > VAR_3 + VAR_4)
  return -1;

 *VAR_6 = VAR_9;

 if (FUNC_1(VAR_8, VAR_9 - VAR_8, &VAR_5->oid, &VAR_8))
  return -1;



 return 0;
}
