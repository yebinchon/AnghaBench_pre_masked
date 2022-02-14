
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int* VAR_0 ;
 char** VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 char** VAR_2 ;

FUNC_5()
{
 int VAR_3,VAR_4,VAR_5,VAR_6;
 int VAR_7,VAR_8;

 FUNC_4("void SexiALI_Convert(SexyAL_format *srcformat, SexyAL_format *destformat, void *vdest, void *vsrc, uint32_t frames)");
 FUNC_4("{");

 for(VAR_3=0;VAR_3<8;VAR_3++)
 {
  FUNC_3("if(srcformat->sampformat == %s)\n{\n",VAR_1[VAR_3]);

  FUNC_3("%s* src=vsrc;\n",VAR_2[VAR_3]);

  for(VAR_4=0;VAR_4<8;VAR_4++)
  {
   FUNC_3("if(destformat->sampformat == %s)\n{\n",VAR_1[VAR_4]);

   FUNC_3("%s* dest=vdest;\n",VAR_2[VAR_4]);

   for(VAR_5=0;VAR_5<2;VAR_5++)
   {
    FUNC_3("if(srcformat->channels == %c)\n{\n",'1'+VAR_5);
    for(VAR_6=0;VAR_6<2;VAR_6++)
    {
     FUNC_3("if(destformat->channels == %c)\n{\n",'1'+VAR_6);
     for(VAR_7=0;VAR_7<2;VAR_7++)
     {
      FUNC_3("if(srcformat->byteorder == %d)\n{\n",VAR_7);
      for(VAR_8=0;VAR_8<2;VAR_8++)
      {
       FUNC_3("if(destformat->byteorder == %d)\n{\n",VAR_8);

       FUNC_3("while(frames--)\n{\n");

       FUNC_4("int32_t tmp;");
       if(VAR_5)
 FUNC_4("int32_t tmp2;");

       FUNC_1(VAR_3,"");

       if(VAR_7)
       {
        if(VAR_0[VAR_3]==16)
         FUNC_4("FLIP16(tmp);");
        else
         FUNC_4("FLIP32(tmp);");
       }

       if(VAR_5)
       {
        FUNC_1(VAR_3,"2");
        if(VAR_7)
        {
         if(VAR_0[VAR_3]==16)
          FUNC_4("FLIP16(tmp2);");
         else
          FUNC_4("FLIP32(tmp2);");
        }
       }

       FUNC_0(VAR_3,VAR_4,"");

       if(VAR_5) FUNC_0(VAR_3,VAR_4,"2");

       if(VAR_8)
       {
        if(VAR_0[VAR_3]==16)
         FUNC_4("FLIP16(tmp);");
        else
         FUNC_4("FLIP32(tmp);");
        if(VAR_5 && VAR_6 && VAR_8)
        {
         if(VAR_0[VAR_3]==16)
          FUNC_4("FLIP16(tmp2);");
         else
          FUNC_4("FLIP32(tmp2);");
        }
       }

       if(VAR_5 && !VAR_6)
        FUNC_3("tmp = (tmp+tmp2)>>1;\n");

       FUNC_2(VAR_4,"");
       if(!VAR_5 && VAR_6)
        FUNC_2(VAR_4,"");

       if(VAR_5 && VAR_6)
        FUNC_2(VAR_4,"2");

       FUNC_4("}");
       FUNC_4("}");
      }
      FUNC_4("}");
     }
     FUNC_4("}");
    }
    FUNC_4("}");
   }
   FUNC_4("}");
  }
  FUNC_4("}");
 }

 FUNC_4("}");
}
